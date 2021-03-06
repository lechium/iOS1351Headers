/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	long long primaryType;
	NSCountedSet* _additionalAttachments;

}

@property (nonatomic,retain) NSCountedSet * additionalAttachments;              //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (assign,nonatomic) long long primaryType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(unsigned long long)numberOfAdditionalAttachments;
-(void)addAttachmentOfType:(long long)arg1 ;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
@end

