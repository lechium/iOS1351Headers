/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Messages.framework/Messages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Messages/Messages-Structs.h>
#import <Messages/MSMessageLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding> {

	MSMessageTemplateLayout* _alternateLayout;

}

@property (nonatomic,readonly) MSMessageTemplateLayout * alternateLayout;              //@synthesize alternateLayout=_alternateLayout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAlternateLayout:(id)arg1 ;
-(MSMessageTemplateLayout *)alternateLayout;
@end

