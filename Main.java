public class Main {
    public static int S=54;
    public static int K=3;
    public static int N=5;

    public static int findMatrices(int [][] array, int K, int N){
        int count=0;
        for (int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int[][] matrix = new int[K][K];
                int suma=0;
                if (i+K<=N & j+K<=N){
                    for (int w=0;w<K;w++){
                        for (int x=0;x<K;x++){
                            matrix[w][x]= array[i+w][i+x];
                            suma+=matrix[w][x];
                        }
                    }
                    System.out.println("Suma: "+suma);
                    if (suma==S){
                        System.out.println("Znaleziono podmacierz! ");
                        for (int w=0;w<K;w++){
                            for (int x=0;x<K;x++){
                                System.out.println( matrix[w][x]);
                            }
                        }
                        count++;
                    }
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[][] matrix = new int[N][N];
        for (int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                matrix[i][j]=i*3;
                System.out.println("i: "+i+" j: "+j+ " wartosc: "+matrix[i][j]);
            }
        }
        System.out.println("LICZBA PODMACIERZY: "+ findMatrices(matrix,K,N));
    }
}
