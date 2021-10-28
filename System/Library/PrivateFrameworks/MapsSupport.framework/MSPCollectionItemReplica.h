/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPOrderedReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MSPCollectionItemReplica : MSPOrderedReplica <MSPContainerStateSnapshot, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents; 
+(id)itemReplicaWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(NSArray *)contents;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
@end
