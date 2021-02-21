// https://helloacm.com/the-c-template-for-printing-the-vector-list-set-map-by-overriding-the-cout-operator/

template <typename T>
ostream& operator <<(ostream& out, const vector<T>& a) {
  out << "["; bool first = true;
  for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "]";
  return out;
}
