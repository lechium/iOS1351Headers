/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXUIWidgetBar.h>
#import <libobjc.A.dylib/PXUIWidgetFooterViewDelegate.h>

@class NSString;

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateView;
-(void)setSpec:(id)arg1 ;
-(void)setDisclosureTitle:(id)arg1 ;
-(id)createView;
-(double)viewHeight;
-(void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2 ;
@end

