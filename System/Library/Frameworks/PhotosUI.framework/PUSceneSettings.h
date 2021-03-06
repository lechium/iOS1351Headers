/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUSceneSettings : PXSettings {

	BOOL _showConfidenceOverlay;
	unsigned long long _inspectorSortOrder;

}

@property (assign,nonatomic) BOOL showConfidenceOverlay;                         //@synthesize showConfidenceOverlay=_showConfidenceOverlay - In the implementation block
@property (assign,nonatomic) unsigned long long inspectorSortOrder;              //@synthesize inspectorSortOrder=_inspectorSortOrder - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)showConfidenceOverlay;
-(void)setInspectorSortOrder:(unsigned long long)arg1 ;
-(unsigned long long)inspectorSortOrder;
-(void)setShowConfidenceOverlay:(BOOL)arg1 ;
@end

