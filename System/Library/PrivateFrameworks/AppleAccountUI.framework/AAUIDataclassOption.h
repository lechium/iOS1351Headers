/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AAUIDataclassOption : NSObject <NSCoding, NSSecureCoding> {

	BOOL _editable;
	BOOL _enabled;

}

@property (assign,getter=isEditable,nonatomic) BOOL editable;              //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithActions:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)isEditable;
@end

