//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCaptureDevice : NSObject
{
}

+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;

@end
