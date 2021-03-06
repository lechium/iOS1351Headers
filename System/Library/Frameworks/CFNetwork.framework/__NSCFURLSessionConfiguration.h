/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSURLSessionAppleIDContext;
@class NSString, NSURL, NSData, NSNumber, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray;

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _networkServiceType;
	NSString* _sharedContainerIdentifier;
	id _connectionProxyDictionary;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	unsigned long long _HTTPCookieAcceptPolicy;
	id _HTTPAdditionalHeaders;
	long long _HTTPMaximumConnectionsPerHost;
	id _protocolClasses;
	long long _multipathServiceType;
	BOOL _allowsCellularAccess;
	BOOL _allowsExpensiveNetworkAccess;
	BOOL _waitsForConnectivity;
	BOOL _discretionary;
	BOOL _sessionSendsLaunchEvents;
	BOOL _HTTPShouldUsePipelining;
	BOOL _HTTPShouldSetCookies;
	BOOL _shouldUseExtendedBackgroundIdleMode;
	BOOL _requiresPowerPluggedIn;
	NSURL* _directoryForDownloadedFiles;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSData* _sourceApplicationAuditTokenData;
	unsigned long long _TCPAdaptiveReadTimeout;
	unsigned long long _TCPAdaptiveWriteTimeout;
	BOOL _reportsDataStalls;
	long long _timingDataOptions;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSData* _atsContext;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	double _longLivedConnectionCachePurgeTimeout;
	double _longLivedConnectionCacheCellPurgeTimeout;
	NSString* _connectionPoolName;
	NSString* _CTDataConnectionServiceType;
	NSString* _tlsTrustPinningPolicyName;
	BOOL _allowsTLSFallback;
	unsigned long long _customReadBufferSize;
	double _customReadBufferTimeout;
	BOOL _allowsExpensiveAccess;
	BOOL _allowsConstrainedNetworkAccess;
	BOOL _allowsConstrainedNetworkAccessSPI;
	BOOL _allowsPowerNapScheduling;
	BOOL _preventsIdleSleepOnceConnected;
	BOOL _sessionSendsLaunchOnDemandEvents;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	BOOL _allowsRetryForBackgroundDataTasks;
	BOOL _onBehalfOfPairedDevice;
	BOOL _clientIsNotExplicitlyDiscretionary;
	BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
	BOOL _overridesBackgroundSessionAutoRedirect;
	BOOL _performsEVCertCheck;
	BOOL _infersDiscretionaryFromOriginatingClient;
	BOOL _prefersInfraWiFi;
	BOOL _allowsMultipathTCP;
	BOOL _allowsResponseMonitoringDuringBodyTranmission;
	BOOL _allowsIndefiniteConnections;
	BOOL _allowsTCPFastOpen;
	BOOL _allowsTLSSessionTickets;
	BOOL _allowsTLSSessionResumption;
	BOOL _allowsTLSFalseStart;
	BOOL _preventsDirectWiFiAccess;
	BOOL _allowTCPIOConnectionStreamTask;
	BOOL _preventsSystemHTTPProxyAuthentication;
	BOOL _requiresSecureHTTPSProxyConnection;
	BOOL _preventsAppSSO;
	BOOL _allowsSensitiveLogging;
	BOOL _duetPreauthorized;
	long long _duetPreClearedMode;
	BOOL _requiresSustainedDataDelivery;
	BOOL _ignoreDidReceiveResponseDisposition;
	BOOL _alwaysPerformDefaultTrustEvaluation;
	NSNumber* _maximumWatchCellularTransferSize;
	unsigned long long _multipathAlternatePort;
	NSString* _disposition;
	NSURLCredentialStorage* _phskip_credStorage;
	NSURLCache* _phskip_urlCache;
	NSHTTPCookieStorage* _phskip_cookieStorage;
	CFHSTSPolicyRef _phskip_hstsStorage;
	long long _pipeliningHighWatermark;
	long long _pipeliningLowWatermark;
	long long _numPriorityLevels;
	long long _numFastLanes;
	long long _minimumFastLanePriority;
	long long _IDSMessageTimeout;
	NSString* _tcpConnectionPoolName;
	NSDictionary* _socketStreamProperties;
	NSSet* _authenticatorStatusCodes;
	NSArray* _contentDispHeadEncFallback;
	NSString* _companionAppBundleIdentifier;
	NSString* _watchAppBundleIdentifier;
	NSString* _watchExtensionBundleIdentifier;
	unsigned long long _forcedNetworkServiceType;
	NSDictionary* _overriddenDelegateOptions;
	NSSet* _suppressedAutoAddedHTTPHeaders;
	long long _expiredDNSBehavior;
	BOOL _backgroundSession;
	BOOL _phskip_hstsStorageSet;
	BOOL _phskip_cookieStorageSet;
	BOOL _phskip_urlCacheSet;
	BOOL _phskip_credStorageSet;
	BOOL _skip_download_unlink;
	BOOL _requiresClientToOpenFiles;
	BOOL _forcesNewConnections;
	BOOL _supportsAVAssetDownloads;
	BOOL _proxySession;
	BOOL _preventsIdleSleep;
	BOOL _usePipeliningHeuristics;
	BOOL _shouldPreserveBackgroundSessionDisposition;
	BOOL _disablesOutOfProcessDirectWiFiUsage;
	BOOL _disablesUseOfProxySession;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setRequestCachePolicy:(unsigned long long)arg1 ;
-(void)set_sourceApplicationAuditTokenData:(id)arg1 ;
-(BOOL)_preventsAppSSO;
-(id)protocolClasses;
-(id)URLCredentialStorage;
-(id)HTTPCookieStorage;
-(id)URLCache;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(BOOL)waitsForConnectivity;
-(BOOL)isBackgroundSession;
-(BOOL)_requiresClientToOpenFiles;
-(BOOL)skip_download_unlink;
-(id)_directoryForDownloadedFiles;
-(id)_suppressedAutoAddedHTTPHeaders;
-(id)_sourceApplicationAuditTokenData;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(void)setURLCredentialStorage:(id)arg1 ;
-(void)setHTTPCookieStorage:(id)arg1 ;
-(void)setConnectionProxyDictionary:(id)arg1 ;
-(void)setURLCache:(id)arg1 ;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(long long)_timingDataOptions;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(BOOL)_overridesBackgroundSessionAutoRedirect;
-(BOOL)_supportsAVAssetDownloads;
-(BOOL)HTTPShouldSetCookies;
-(unsigned long long)HTTPCookieAcceptPolicy;
-(id)_overriddenDelegateOptions;
-(BOOL)_isProxySession;
-(id)sharedContainerIdentifier;
-(void)setHTTPAdditionalHeaders:(id)arg1 ;
-(id)HTTPAdditionalHeaders;
-(BOOL)_allowTCPIOConnectionStreamTask;
-(void)set_allowsTCPFastOpen:(BOOL)arg1 ;
-(void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1 ;
-(BOOL)isDiscretionary;
-(void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1 ;
-(unsigned long long)_TCPAdaptiveWriteTimeout;
-(void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1 ;
-(unsigned long long)_TCPAdaptiveReadTimeout;
-(BOOL)allowsCellularAccess;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(unsigned long long)networkServiceType;
-(void)setHTTPMaximumConnectionsPerHost:(long long)arg1 ;
-(long long)HTTPMaximumConnectionsPerHost;
-(id)connectionProxyDictionary;
-(double)timeoutIntervalForRequest;
-(void)setTLSMinimumSupportedProtocol:(int)arg1 ;
-(int)TLSMinimumSupportedProtocol;
-(void)setTLSMaximumSupportedProtocol:(int)arg1 ;
-(int)TLSMaximumSupportedProtocol;
-(void)set_sourceApplicationSecondaryIdentifier:(id)arg1 ;
-(id)_sourceApplicationSecondaryIdentifier;
-(void)set_sourceApplicationBundleIdentifier:(id)arg1 ;
-(id)_sourceApplicationBundleIdentifier;
-(BOOL)_reportsDataStalls;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(BOOL)_requiresSustainedDataDelivery;
-(BOOL)_alwaysPerformDefaultTrustEvaluation;
-(BOOL)_allowsTLSFallback;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(void)setProtocolClasses:(id)arg1 ;
-(void)set_atsContext:(id)arg1 ;
-(id)disposition;
-(id)_atsContext;
-(BOOL)_allowsSensitiveLogging;
-(void)set_supportsAVAssetDownloads:(BOOL)arg1 ;
-(void)set_authenticatorStatusCodes:(id)arg1 ;
-(id)_appleIDContext;
-(id)_socketStreamProperties;
-(void)set_socketStreamProperties:(id)arg1 ;
-(BOOL)allowsConstrainedNetworkAccess;
-(BOOL)allowsExpensiveNetworkAccess;
-(void)setAllowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)setAllowsExpensiveNetworkAccess:(BOOL)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(id)_tlsTrustPinningPolicyName;
-(double)_connectionCacheCellPurgeTimeout;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(unsigned long long)_forcedNetworkServiceType;
-(double)_customReadBufferTimeout;
-(unsigned long long)_customReadBufferSize;
-(BOOL)_allowsTLSSessionResumption;
-(BOOL)_allowsTLSSessionTickets;
-(BOOL)_allowsTCPFastOpen;
-(id)_CTDataConnectionServiceType;
-(BOOL)_allowsIndefiniteConnections;
-(BOOL)_allowsResponseMonitoringDuringBodyTranmission;
-(BOOL)_allowsMultipathTCP;
-(BOOL)shouldUseExtendedBackgroundIdleMode;
-(BOOL)_forcesNewConnections;
-(BOOL)_preventsIdleSleepOnceConnected;
-(id)_tcpConnectionPoolName;
-(BOOL)_allowsPowerNapScheduling;
-(unsigned long long)_multipathAlternatePort;
-(BOOL)_allowsConstrainedNetworkAccess;
-(BOOL)_allowsExpensiveAccess;
-(BOOL)_requiresPowerPluggedIn;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1 ;
-(long long)_expiredDNSBehavior;
-(long long)multipathServiceType;
-(BOOL)_allowsTLSFalseStart;
-(id)_companionAppBundleIdentifier;
-(BOOL)_clientIsNotExplicitlyDiscretionary;
-(id)_authenticatorStatusCodes;
-(id)initWithDisposition:(id)arg1 ;
-(double)_connectionCachePurgeTimeout;
-(double)_longLivedConnectionCachePurgeTimeout;
-(double)_longLivedConnectionCacheCellPurgeTimeout;
-(id)_connectionPoolName;
-(BOOL)_sessionSendsLaunchOnDemandEvents;
-(BOOL)_onBehalfOfPairedDevice;
-(BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
-(BOOL)_performsEVCertCheck;
-(BOOL)_infersDiscretionaryFromOriginatingClient;
-(BOOL)_prefersInfraWiFi;
-(BOOL)_preventsDirectWiFiAccess;
-(BOOL)_duetPreauthorized;
-(long long)_duetPreClearedMode;
-(BOOL)_ignoreDidReceiveResponseDisposition;
-(id)_maximumWatchCellularTransferSize;
-(id)_phskip_credStorage;
-(id)_phskip_urlCache;
-(id)_phskip_cookieStorage;
-(CFHSTSPolicyRef)_phskip_hstsStorage;
-(long long)_IDSMessageTimeout;
-(id)_contentDispHeadEncFallback;
-(id)_watchAppBundleIdentifier;
-(id)_watchExtensionBundleIdentifier;
-(BOOL)_phskip_hstsStorageSet;
-(BOOL)_phskip_cookieStorageSet;
-(BOOL)_phskip_urlCacheSet;
-(BOOL)_phskip_credStorageSet;
-(BOOL)_preventsIdleSleep;
-(BOOL)_usePipeliningHeuristics;
-(BOOL)_shouldPreserveBackgroundSessionDisposition;
-(BOOL)_disablesOutOfProcessDirectWiFiUsage;
-(BOOL)_disablesUseOfProxySession;
-(void)setHSTSPolicy:(CFHSTSPolicyRef)arg1 ;
-(unsigned short)TLSMinimumSupportedProtocolVersion;
-(unsigned short)TLSMaximumSupportedProtocolVersion;
-(BOOL)_isEqual2:(id)arg1 ;
-(unsigned long long)requestCachePolicy;
-(void)setWaitsForConnectivity:(BOOL)arg1 ;
-(void)setSharedContainerIdentifier:(id)arg1 ;
-(BOOL)sessionSendsLaunchEvents;
-(void)setSessionSendsLaunchEvents:(BOOL)arg1 ;
-(void)setHTTPShouldSetCookies:(BOOL)arg1 ;
-(void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1 ;
-(void)setMultipathServiceType:(long long)arg1 ;
-(void)set_requiresPowerPluggedIn:(BOOL)arg1 ;
-(void)set_directoryForDownloadedFiles:(id)arg1 ;
-(void)set_reportsDataStalls:(BOOL)arg1 ;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(void)set_allowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(void)set_preventsIdleSleepOnceConnected:(BOOL)arg1 ;
-(void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1 ;
-(void)set_timingDataOptions:(long long)arg1 ;
-(void)set_appleIDContext:(id)arg1 ;
-(void)set_connectionCachePurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCachePurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1 ;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(void)set_onBehalfOfPairedDevice:(BOOL)arg1 ;
-(void)set_clientIsNotExplicitlyDiscretionary:(BOOL)arg1 ;
-(void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1 ;
-(void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1 ;
-(void)set_performsEVCertCheck:(BOOL)arg1 ;
-(void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1 ;
-(void)set_connectionPoolName:(id)arg1 ;
-(void)set_prefersInfraWiFi:(BOOL)arg1 ;
-(void)set_allowsMultipathTCP:(BOOL)arg1 ;
-(void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1 ;
-(void)set_allowsIndefiniteConnections:(BOOL)arg1 ;
-(void)set_CTDataConnectionServiceType:(id)arg1 ;
-(void)set_allowsTLSSessionTickets:(BOOL)arg1 ;
-(void)set_allowsTLSSessionResumption:(BOOL)arg1 ;
-(void)set_allowsTLSFalseStart:(BOOL)arg1 ;
-(void)set_tlsTrustPinningPolicyName:(id)arg1 ;
-(void)set_allowsTLSFallback:(BOOL)arg1 ;
-(void)set_preventsDirectWiFiAccess:(BOOL)arg1 ;
-(void)set_customReadBufferSize:(unsigned long long)arg1 ;
-(void)set_customReadBufferTimeout:(double)arg1 ;
-(void)set_allowsSensitiveLogging:(BOOL)arg1 ;
-(void)set_duetPreauthorized:(BOOL)arg1 ;
-(void)set_duetPreClearedMode:(long long)arg1 ;
-(void)set_requiresSustainedDataDelivery:(BOOL)arg1 ;
-(void)set_IDSMessageTimeout:(long long)arg1 ;
-(void)set_ignoreDidReceiveResponseDisposition:(BOOL)arg1 ;
-(void)set_alwaysPerformDefaultTrustEvaluation:(BOOL)arg1 ;
-(void)set_maximumWatchCellularTransferSize:(id)arg1 ;
-(void)set_multipathAlternatePort:(unsigned long long)arg1 ;
-(void)setBackgroundSession:(BOOL)arg1 ;
-(void)setDisposition:(id)arg1 ;
-(void)set_phskip_credStorage:(id)arg1 ;
-(void)set_phskip_credStorageSet:(BOOL)arg1 ;
-(void)set_phskip_urlCache:(id)arg1 ;
-(void)set_phskip_urlCacheSet:(BOOL)arg1 ;
-(void)set_phskip_cookieStorage:(id)arg1 ;
-(void)set_phskip_cookieStorageSet:(BOOL)arg1 ;
-(void)set_phskip_hstsStorage:(CFHSTSPolicyRef)arg1 ;
-(void)set_phskip_hstsStorageSet:(BOOL)arg1 ;
-(long long)pipeliningHighWatermark;
-(void)setPipeliningHighWatermark:(long long)arg1 ;
-(long long)pipeliningLowWatermark;
-(void)setPipeliningLowWatermark:(long long)arg1 ;
-(long long)numPriorityLevels;
-(void)setNumPriorityLevels:(long long)arg1 ;
-(long long)numFastLanes;
-(void)setNumFastLanes:(long long)arg1 ;
-(long long)minimumFastLanePriority;
-(void)setMinimumFastLanePriority:(long long)arg1 ;
-(void)setSkip_download_unlink:(BOOL)arg1 ;
-(void)set_requiresClientToOpenFiles:(BOOL)arg1 ;
-(void)set_tcpConnectionPoolName:(id)arg1 ;
-(void)set_forcesNewConnections:(BOOL)arg1 ;
-(void)set_proxySession:(BOOL)arg1 ;
-(void)set_preventsIdleSleep:(BOOL)arg1 ;
-(void)set_usePipeliningHeuristics:(BOOL)arg1 ;
-(void)set_contentDispHeadEncFallback:(id)arg1 ;
-(void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1 ;
-(void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1 ;
-(void)set_disablesUseOfProxySession:(BOOL)arg1 ;
-(void)set_companionAppBundleIdentifier:(id)arg1 ;
-(void)set_watchAppBundleIdentifier:(id)arg1 ;
-(void)set_watchExtensionBundleIdentifier:(id)arg1 ;
-(void)set_forcedNetworkServiceType:(unsigned long long)arg1 ;
-(void)set_overriddenDelegateOptions:(id)arg1 ;
-(void)set_suppressedAutoAddedHTTPHeaders:(id)arg1 ;
-(void)set_expiredDNSBehavior:(long long)arg1 ;
@end

