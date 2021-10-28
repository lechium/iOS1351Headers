/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface KSXMLAttributes : NSObject <NSCopying> {

	NSMutableArray* _attributes;

}

@property (nonatomic,copy) NSDictionary * attributesAsDictionary; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)close;
-(BOOL)hasAttributes;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
-(void)writeAttributes:(id)arg1 ;
-(id)initWithXMLAttributes:(id)arg1 ;
-(NSDictionary *)attributesAsDictionary;
-(void)setAttributesAsDictionary:(NSDictionary *)arg1 ;
@end
