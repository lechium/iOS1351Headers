/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFSaveLogsOperation : WFOperation {

	NSString* _comments;

}

@property (nonatomic,copy) NSString * comments;              //@synthesize comments=_comments - In the implementation block
-(void)start;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(id)initWithComments:(id)arg1 ;
@end
