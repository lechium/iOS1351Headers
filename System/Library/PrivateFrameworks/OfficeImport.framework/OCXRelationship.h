/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface OCXRelationship : NSObject {

	NSString* mIdString;
	NSString* mType;
	NSString* mTarget;
	BOOL mExternal;

}

@property (nonatomic,readonly) NSString * idString; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * target; 
-(NSString *)type;
-(NSString *)target;
-(NSString *)idString;
-(id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(void)writeToStreamWriter:(id)arg1 ;
@end

