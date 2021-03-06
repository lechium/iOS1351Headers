/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CFXEffectPickerViewDataSource <NSObject>
@required
-(unsigned long long)numberOfEffectsInPickerView:(id)arg1;
-(unsigned long long)effectPickerView:(id)arg1 indexForEffectID:(id)arg2;
-(id)effectPickerView:(id)arg1 effectTitleAtIndex:(long long)arg2;
-(id)effectPickerView:(id)arg1 effectIdentifierAtIndex:(long long)arg2;
-(void)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 forPreviewingAtSizeInPixels:(CGSize)arg3 completionBlock:(/*^block*/id)arg4;

@end

