/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface ICEvernoteNote : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _content;
	NSDate* _created;
	NSDate* _updated;
	NSArray* _resources;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * content;               //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSDate * created;                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                 //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(NSDate *)created;
-(void)setCreated:(NSDate *)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(NSDate *)updated;
-(void)setUpdated:(NSDate *)arg1 ;
@end

