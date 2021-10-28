/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>

@class NSData, QLItem, NSString;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {

	NSData* _data;
	QLItem* _item;

}

@property (nonatomic,readonly) QLItem * item;                       //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLItem *)item;
-(id)provideDataForItem:(id)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 ;
@end
