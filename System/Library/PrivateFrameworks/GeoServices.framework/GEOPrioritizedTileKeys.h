/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPrioritizedTileKeys : NSObject {

	void* _keysAndPriorities;

}

@property (nonatomic,readonly) unsigned highestPriority; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeKey:(const GEOTileKey*)arg1 ;
-(void)setPriority:(unsigned)arg1 forKey:(const GEOTileKey*)arg2 ;
-(unsigned)highestPriority;
-(BOOL)popHighestPriorityKey:(GEOTileKey*)arg1 priority:(unsigned*)arg2 ;
-(id)initWithKeys:(id)arg1 priorities:(id)arg2 ;
@end
