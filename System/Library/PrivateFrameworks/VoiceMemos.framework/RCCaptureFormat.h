/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RCCaptureFormat : NSObject
+(id)fileExtensionForIntermediateAssetCapture;
+(id)fileFormatsDirectlyImportable;
+(id)fileExtensionForAssetExport;
+(void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 ;
+(id)fileExtensionsSupported;
+(void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVFileTypeUTIForFileExtension:(id)arg1 ;
+(id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned)arg2 ;
+(id)AVMediaTypeForFileExtension:(id)arg1 ;
@end

