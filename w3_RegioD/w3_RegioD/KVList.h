#ifndef KVLIST_H_
#define KVLIST_H_

template <typename K, typename V, int N>
class KVList {
	K arrk[N];
	V arrv[N];
	size_t idx;
public:
	KVList() {
		idx = 0;
	}
	size_t size() const {
		return idx;
	}

	const K& key(int i) const {
		return arrk[i];
	}

	const V& value(int i) const {
		return arrv[i];
	}

	KVList& add(const K& k, const V& v) {
		if (idx < N) {
			arrk[idx] = k;
			arrv[idx] = v;
			idx++;
		}
		return *this;
	}

	int find(const K& k = 0) const {
		size_t temp = 0;
		for (size_t i = 0; i < idx; i++) {
			if (arrk[i] == k) {
				temp = i;
			}
		}
		return temp;
	}
	KVList& replace(int i, const K& k, const V& v) {
		arrk[i] = k;
		arrv[i] = v;

		return *this;
	}

};

#endif