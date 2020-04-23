import java.lang.reflect.*;

public class AssistantDecoder {
    Class c;
    Assistant a;
  AssistantDecoder(Assistant assistant) {
    this.c = Assistant.class;
    this.a = assistant;
  }

  public void addPersonToRecommendations(String name) throws Exception {
    Method m = this.c.getDeclaredMethod("addPersonToRecommendations", String.class);
    m.setAccessible(true);
    m.invoke(this.a, name);
  }

  public int getSalary() throws Exception {
    Field f = this.c.getDeclaredField("salary");
    f.setAccessible(true);
    return (int)f.get(this.a);
  }
}