#pragma once
#ifndef KVLIST_H_
#define KVLIST_H_

template <typename K, typename V, int N>
class KVList {
	K[N];
	V[N];
public:
	KVList();
	size_t size() const;
	const K& key(int i) const;
	const V& value(int i) const;
	KVList& add(const K&, const V&);
	int find(const K& k) const;
	KVList& replace(int i, const K& k, const V& v);

};

#endif