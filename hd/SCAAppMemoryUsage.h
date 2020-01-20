//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppMemoryUsage : SCAUserTrackedEvent
{
}

- (void)setTotalMemoryUsage:(long long)arg1;
- (void)setTimeBucket:(long long)arg1;
- (void)setPageType:(long long)arg1;
- (void)setPageName:(id)arg1;
- (void)setPageFaultCount:(long long)arg1;
- (void)setNativeHeapMemoryUsage:(long long)arg1;
- (void)setMaxMemoryUsage:(long long)arg1;
- (void)setLowMemoryCount:(long long)arg1;
- (void)setJavaHeapMemoryUsage:(long long)arg1;
- (void)setIsBackground:(_Bool)arg1;
- (void)setGraphicsMemoryUsage:(long long)arg1;
- (void)setFreeJavaHeapMemoryUsage:(long long)arg1;
- (void)setCriticalMemoryCount:(long long)arg1;
- (void)setCodeMemoryUsage:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
