/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface MTCallerSuppliedFields : NSObject {

	NSArray* _eventData;
	NSDictionary* _cachedMergedFields;

}

@property (nonatomic,retain) NSArray * eventData;                            //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedMergedFields;              //@synthesize cachedMergedFields=_cachedMergedFields - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(id)initWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4 ;
-(id)initWithEventData:(id)arg1 ;
-(id)valueForCallerSuppliedField:(id)arg1 ;
-(NSDictionary *)cachedMergedFields;
-(void)setCachedMergedFields:(NSDictionary *)arg1 ;
-(id)mergedFields;
@end
