//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSAAssetFactory : NSObject
{
}

+ (id)videoPlayerAssetWithPath:(id)arg1;
+ (id)audioPlayerWithPath:(id)arg1 error:(id *)arg2;
+ (id)dataWithPath:(id)arg1;
+ (id)_tryGetDataWithPath:(id)arg1;
+ (id)_memMappedIfPossibleDataFromFile:(struct __sFILE *)arg1 path:(id)arg2;

@end

