/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentLayout.h>

@class NSString;

@interface SXJSONDocumentLayout : SXJSONObject <SXDocumentLayout>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long margin; 
@property (nonatomic,readonly) long long gutter; 
@property (nonatomic,readonly) unsigned long long columns; 
-(unsigned long long)columns;
-(long long)gutter;
-(long long)margin;
-(long long)width;
-(long long)gutterWithValue:(id)arg1 withType:(int)arg2 ;
@end

