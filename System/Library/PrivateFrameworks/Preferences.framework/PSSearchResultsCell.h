/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	BOOL _shouldIndentContent;
	BOOL _shouldIndentSeparator;

}

@property (assign,nonatomic) BOOL shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShouldIndentSeparator:(BOOL)arg1 ;
-(void)setShouldIndentContent:(BOOL)arg1 ;
-(BOOL)shouldIndentContent;
-(BOOL)shouldIndentSeparator;
@end

