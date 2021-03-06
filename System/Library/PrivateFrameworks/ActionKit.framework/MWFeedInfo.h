/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding> {

	NSString* title;
	NSString* link;
	NSString* summary;
	NSURL* url;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSURL * url; 
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
@end

