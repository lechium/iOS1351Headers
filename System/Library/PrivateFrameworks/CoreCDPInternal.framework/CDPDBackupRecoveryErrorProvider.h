/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPDBackupRecoveryErrorProvider <NSObject>
@required
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2;
-(void)setPrevailingSecret:(unsigned long long)arg1;
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
-(id)verficationFailedErrorwithUnderlyingError:(id)arg1;
-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2;
-(id)globalHardLimitErrorWithRecord:(id)arg1;
-(id)hardLimitErrorForRecord:(id)arg1;

@end

