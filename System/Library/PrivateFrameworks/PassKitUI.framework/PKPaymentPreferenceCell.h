/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(BOOL)hasError;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
@end

