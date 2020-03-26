class MyPair<K, V>{
    private K key;
    private V value;

    public MyPair(K key, V value){
        this.key = key;
        this.value = value;
    }

    public K getKey(){
        return this.key;
    }

    public V getVal(){
        return this.value;
    }

    public void setKey(K key){
        this.key = key;
    }

    public void setVal(V value){
        this.value = value;
    }

    public boolean isEqual(MyPair pair){
        return this.key.equals(pair.key) && this.value.equals(pair.value);
    }

    public int nearEQ(MyPair pair){
        if(isEqual(pair)){
            return 3;
        }
        else if(this.key.equals(pair.key)){
            return 1;
        }
        else if(this.value.equals(pair.value)){
            return 2;
        }
        return 0;
    }
}