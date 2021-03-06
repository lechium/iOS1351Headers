/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VUIMediaEntityKind : NSObject <NSCopying> {

	NSString* _mediaEntityClassName;
	NSArray* _propertyDescriptors;
	NSDictionary* _propertyDescriptorsByName;

}

@property (nonatomic,copy) NSDictionary * propertyDescriptorsByName;              //@synthesize propertyDescriptorsByName=_propertyDescriptorsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaEntityClassName;              //@synthesize mediaEntityClassName=_mediaEntityClassName - In the implementation block
@property (nonatomic,copy) NSArray * propertyDescriptors;                         //@synthesize propertyDescriptors=_propertyDescriptors - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMediaEntityClassName:(id)arg1 ;
-(void)setPropertyDescriptors:(NSArray *)arg1 ;
-(id)propertyDescriptorForName:(id)arg1 ;
-(id)sortingPropertyDescriptorForName:(id)arg1 ;
-(void)setPropertyDescriptorsByName:(NSDictionary *)arg1 ;
-(NSArray *)propertyDescriptors;
-(NSDictionary *)propertyDescriptorsByName;
-(NSString *)mediaEntityClassName;
@end

