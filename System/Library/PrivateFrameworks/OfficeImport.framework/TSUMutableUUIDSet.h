/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TSUUUIDSet.h>

@interface TSUMutableUUIDSet : TSUUUIDSet
-(BOOL)removeUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(BOOL)addUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)removeAllUuids;
-(void)addUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)addUuidsFromSet:(id)arg1 ;
-(void)addUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUuidsFromSet:(id)arg1 ;
-(void)removeUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
@end
