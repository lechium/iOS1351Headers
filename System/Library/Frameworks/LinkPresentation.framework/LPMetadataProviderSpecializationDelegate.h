/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LPMetadataProviderSpecializationDelegate <NSObject>
@optional
-(void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;

@required
-(void)metadataProviderSpecializationDidFail:(id)arg1;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;

@end

