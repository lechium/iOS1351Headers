/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>

@interface NewsUI2.OfflineIssueManager : NSObject <FCNetworkReachabilityObserving, FCOfflineIssueListObserving> {

	 issueDownloadService;
	 offlineIssueList;
	 storageLevelProvider;
	 issueOfflineManager;
	 networkReachability;
	 cachedIssuesPromise;
	 downloads;
	 downloadsLock;
	 issueIDsAvailableOffline;

}
-(void)powerStateDidChange;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(id)init;
@end

