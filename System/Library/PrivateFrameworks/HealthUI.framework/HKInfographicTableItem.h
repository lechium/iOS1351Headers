/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicTableItem : NSObject <HKInfographicItem> {

	BOOL _separatorHidden;
	NSAttributedString* _titleString;
	NSAttributedString* _valueString;

}

@property (nonatomic,retain) NSAttributedString * titleString;              //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSAttributedString * valueString;              //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) BOOL separatorHidden;                          //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)valueString;
-(void)setValueString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)separatorHidden;
-(id)initWithTitle:(id)arg1 value:(id)arg2 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 separatorHidden:(BOOL)arg3 ;
@end

