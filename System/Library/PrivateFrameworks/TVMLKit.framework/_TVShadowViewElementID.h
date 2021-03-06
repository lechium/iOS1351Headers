/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKViewElement, NSString;

@interface _TVShadowViewElementID : NSObject <NSCopying> {

	IKViewElement* _viewElement;
	NSString* _itemID;

}

@property (nonatomic,copy,readonly) NSString * itemID;                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemID;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
@end

