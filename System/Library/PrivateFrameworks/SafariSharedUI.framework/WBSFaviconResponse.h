/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/WBSSiteMetadataResponse.h>
#import <libobjc.A.dylib/WBSIconResponse.h>

@class UIImage, UIColor, NSString;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse> {

	UIImage* _favicon;
	unsigned long long _faviconType;

}

@property (nonatomic,readonly) UIImage * favicon;                               //@synthesize favicon=_favicon - In the implementation block
@property (nonatomic,readonly) unsigned long long faviconType;                  //@synthesize faviconType=_faviconType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * icon; 
@property (getter=isGenerated,nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) UIColor * extractedBackgroundColor; 
-(id)initWithURL:(id)arg1 ;
-(UIImage *)icon;
-(UIImage *)favicon;
-(unsigned long long)faviconType;
-(id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3 ;
@end

