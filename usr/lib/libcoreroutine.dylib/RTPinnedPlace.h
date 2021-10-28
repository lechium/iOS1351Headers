/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTMapItem;

@interface RTPinnedPlace : NSObject {

	unsigned long long _type;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                  //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)type;
-(RTMapItem *)mapItem;
-(id)initWithType:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end
