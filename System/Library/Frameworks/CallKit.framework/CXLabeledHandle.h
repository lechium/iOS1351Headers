/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CXHandle, NSString;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	CXHandle* _handle;
	NSString* _label;

}

@property (nonatomic,retain) CXHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                 //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CXHandle *)handle;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setHandle:(CXHandle *)arg1 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(id)initWithHandle:(id)arg1 label:(id)arg2 ;
@end

