/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSAttributedString, UIFont, UIColor;

@interface _MKPlaceBusinessInfoItem : NSObject {

	NSString* _displayString;
	BOOL _isAvailable;
	NSAttributedString* _formattedDisplayString;
	UIFont* _font;
	UIColor* _textColor;

}

@property (nonatomic,readonly) NSAttributedString * displayString; 
+(id)itemWithDescription:(id)arg1 availability:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)displayString;
-(void)setFont:(id)arg1 textColor:(id)arg2 ;
@end

