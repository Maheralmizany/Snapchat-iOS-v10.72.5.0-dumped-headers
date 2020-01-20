//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNNetworkApiNetworkApi : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::network_api::NetworkApi>, std::__1::shared_ptr<snap::network_api::NetworkApi>> _cppRefHandle;
}

+ (id)createInstance:(id)arg1 uiPageChangeNotifier:(id)arg2 dataSaverModeChangeNotifier:(id)arg3 connectivityChangeNotifier:(id)arg4 userLogOutNotifier:(id)arg5 bandwidthChangeNotifier:(id)arg6 networkManager:(id)arg7 certPins:(id)arg8 cronetExperimentalOptions:(id)arg9 loggingDir:(id)arg10 timeoutInterval:(long long)arg11 dataProviderFactory:(id)arg12 networkDispatchQueue:(id)arg13 shouldUseBandwidthBasedScheduler:(_Bool)arg14;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pathToNetLog;
- (void)stopNetLog;
- (_Bool)startNetLog;
- (void)cancel:(id)arg1;
- (void)updateUILayoutOrder:(id)arg1 uiPageInfo:(id)arg2 mediaContextType:(long long)arg3;
- (void)update:(id)arg1 rankingSignals:(id)arg2;
- (void)submit:(id)arg1 downloadFilePath:(id)arg2 rankingSignals:(id)arg3 executor:(id)arg4 progressiveCallback:(id)arg5 callback:(id)arg6 uploadData:(id)arg7 uploadFilePath:(id)arg8;
- (id)initWithCpp:(const shared_ptr_8a449218 *)arg1;

@end

