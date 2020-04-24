// import javax.swing.text.Position;
import java.io.IOException;
import java.util.*;

public class ChunkLoader implements Runnable {
    // ... Anda boleh menambahkan atribut
    String chunkDataFilename;
    Chunk chunk;

    public ChunkLoader(Chunk chunk, String chunkDataFilename) {
        // ... Isilah constructor sesuai kebutuhan
        this.chunkDataFilename = chunkDataFilename;
        this.chunk = chunk;
    }

    @Override
    public void run() {
        CSVReader text = new CSVReader(this.chunkDataFilename, ",");
        // Membaca file dengan nama chunkDataFilename
        // Gunakan class CSVReader.
        // Contoh file chunkDataFilename:
        // x,y
        // 1,18
        // 10,8
        // 6,12
        // Untuk setiap x dan y, tambahkan tree ke Chunk
        List<String[]> pos = new ArrayList();
        try{
             pos = text.read();
        }
        catch(IOException e){}
        for(String[] a : pos){
            this.chunk.addTree(new Position(Integer.parseInt(a[0]),Integer.parseInt(a[1])));
        }
        // Jika ada IOException pada saat membaca reader, catch Exception
        // tidak ada tree yang ditambahkan pada Chunk (tidak dithrow lagi)
    }
}
