/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

typedef struct TopoReplica {
	NSUUID* uuid;
	unsigned index;
} TopoReplica;

typedef struct TopoID {
	TopoReplica replica;
	unsigned clock;
} TopoID;

typedef struct _compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __value_;
} compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __begin_;
	pair<TopoID, TopoID> __end_;
	compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > __end_cap_;
} vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct _compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __value_;
} compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> >;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __begin_;
	TopoSubstring __end_;
	compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > __end_cap_;
} vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >;

typedef struct _NSZone* NSZoneRef;

