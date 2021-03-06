/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VNError : NSObject
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)errorForCancellationOfRequest:(id)arg1 ;
+(id)errorForMemoryAllocationFailure;
+(id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1 ;
+(id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidOperationWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidOperationForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 ;
+(id)errorForMissingOptionNamed:(id)arg1 ;
+(id)errorForInvalidOption:(id)arg1 named:(id)arg2 ;
+(id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3 ;
+(id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidArgument:(id)arg1 named:(id)arg2 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnknownErrorErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForGPURequiredByRequest:(id)arg1 ;
+(id)errorForUnsupportedProcessingDevice:(id)arg1 ;
+(id)errorForUnsupportedConfigurationOfRequest:(id)arg1 ;
+(id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2 ;
+(id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2 ;
+(id)errorForUnsupportedPrivateRevision:(unsigned long long)arg1 ofRequest:(id)arg2 ;
+(id)errorForUnsupportedPrivateRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2 ;
+(id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 ;
+(id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2 ;
+(id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2 ;
+(id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2 ;
+(void)logInternalError:(id)arg1 ;
@end

