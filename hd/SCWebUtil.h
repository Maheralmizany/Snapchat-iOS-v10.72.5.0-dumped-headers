//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCWebUtil : NSObject
{
}

+ (unsigned long long)_calculateWebKitCacheUsage;
+ (void)_fullClearDiskCacheIfNeeded;
+ (void)_clearDiskCacheIfMarked;
+ (id)_persistentDomains;
+ (id)_cachePersistentDomainsPath;
+ (id)_guardFilePath;
+ (void)setCachePersistentDomains:(id)arg1;
+ (id)WKWebViewWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
+ (void)markClearDiskCacheOnNextColdStartupIfExceeds:(unsigned long long)arg1;
+ (void)clearBrowserCachesAndCookies;
+ (void)clearBrowserCachesAndCookiesWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)browserCachesAndCookiesSize;

@end

