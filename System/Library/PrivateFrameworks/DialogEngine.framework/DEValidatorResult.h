/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface DEValidatorResult : NSObject {

	NSString* _status;
	NSArray* _errors;
	NSArray* _warnings;

}

@property (nonatomic,retain) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * errors;                //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * warnings;              //@synthesize warnings=_warnings - In the implementation block
-(NSString *)status;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(NSArray *)warnings;
-(void)setWarnings:(NSArray *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
@end

