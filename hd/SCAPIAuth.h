//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAPIAuth : NSObject
{
}

+ (id)versionName;
+ (id)schemeName;
+ (id)appVersion;
+ (id)appName;
+ (id)userAgentHeader;
+ (id)requestTokenForUserToken:(id)arg1 timestamp:(id)arg2;
+ (id)authenticationParametersForUserWithToken:(id)arg1 username:(id)arg2 withDeviceInfo:(_Bool)arg3 deviceIdManager:(id)arg4;
+ (id)authenticationParametersForEndpoint:(id)arg1 authToken:(id)arg2 username:(id)arg3 parameters:(id)arg4 deviceIdManager:(id)arg5;
+ (id)staticFSNAuthToken;

@end
