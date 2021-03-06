/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject {

	BOOL _didFinish;
	NSDictionary* _errors;

}

@property (nonatomic,retain) NSDictionary * errors;              //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                     //@synthesize didFinish=_didFinish - In the implementation block
-(id)description;
-(NSDictionary *)errors;
-(void)setErrors:(NSDictionary *)arg1 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
@end

