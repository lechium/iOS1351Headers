/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKTransitInfoPreload.h>
@class NSAttributedString;


@protocol MKTransitInfoPreload <NSObject>
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@required
-(NSAttributedString *)attributedString;

@end


@class NSAttributedString, NSString;

@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload> {

	NSAttributedString* _attributedString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
@end

