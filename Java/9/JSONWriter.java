import java.util.Map;
import java.util.TreeMap;
import java.util.stream.Collectors;
import java.lang.reflect.*;

class JSONWriter {
    private Object o;

    public JSONWriter(Object o) {
        this.o = o;
    }

    public String mapToJSON(Map<String, String> jsonFieldMap) {
        String jsonString = jsonFieldMap
            .entrySet()
            .stream()
            .map(entry -> "\"" + entry.getKey() + "\":\"" + entry.getValue() + "\"")
            .collect(Collectors.joining(","));

        return "{" + jsonString + "}";
    }

    public String toString() {
        Map<String, String> jsonFieldMap = new TreeMap<>();
        // TODO:
        // Untuk setiap field di kelas o, periksa apakah memiliki anotasi dengan
        // field.isAnnotationPresent(JSONField.class).
        Class c = this.o.getClass();
        Field[] f = c.getDeclaredFields();
        for(Field i : f){
            try{
                i.setAccessible(true);
                if(i.isAnnotationPresent(JSONField.class)){
                    jsonFieldMap.put((String)i.getName(), (String)i.get(o));
                }
            }catch(Exception e){}
        }
        // Jika ada, tambahkan entry ke jsonFieldMap dengan <key,value> =
        //   key = nama field
        //   value = nilai dari field
        // ...lengkapi di sini
        return mapToJSON(jsonFieldMap);
    }
}
