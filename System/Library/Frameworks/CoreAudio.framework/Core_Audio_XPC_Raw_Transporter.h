/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface Core_Audio_XPC_Raw_Transporter : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)object;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
@end
