class Solution {
    public String sortVowels(String s) {
        HashSet<Character> set = new HashSet<>();
        set.add('a');
        set.add('e');
        set.add('i');
        set.add('o');
        set.add('u');
        set.add('A');
        set.add('E');
        set.add('I');
        set.add('O');
        set.add('U');

        ArrayList<Character> a = new ArrayList<>();
        for(int i=0;i<s.length();i++){
            char check = s.charAt(i);
            if(set.contains(check)){
                a.add(s.charAt(i));
            }
        }
        Collections.sort(a);
        StringBuilder sb = new StringBuilder(s);
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(set.contains(sb.charAt(i))){
                sb.setCharAt(i,a.get(j));
                j++;
            }
        }
        return sb.toString();
    }
}