/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSDictionary;

@interface CKEvent : NSObject {

	NSString* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDictionary* _metadata;

}

@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDictionary *)metadata;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
@end
