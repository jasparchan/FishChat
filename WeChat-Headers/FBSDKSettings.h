//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKSettings : NSObject
{
}

+ (id)graphAPIDebugParamValue;
+ (void)updateGraphAPIDebugBehavior;
+ (struct FBSDKAccessTokenCacheV4 *)accessTokenCache;
+ (id)sdkVersion;
+ (id)legacyUserDefaultTokenInformationKeyName;
+ (void)setLegacyUserDefaultTokenInformationKeyName:(id)arg1;
+ (void)disableLoggingBehavior:(id)arg1;
+ (void)enableLoggingBehavior:(id)arg1;
+ (void)setLoggingBehavior:(id)arg1;
+ (id)loggingBehavior;
+ (void)setLimitEventAndDataUsage:(_Bool)arg1;
+ (_Bool)limitEventAndDataUsage;
+ (void)setJPEGCompressionQuality:(double)arg1;
+ (double)JPEGCompressionQuality;
+ (void)_setJPEGCompressionQualityNumber:(id)arg1;
+ (id)_JPEGCompressionQualityNumber;
+ (void)setFacebookDomainPart:(id)arg1;
+ (id)facebookDomainPart;
+ (void)setDisplayName:(id)arg1;
+ (id)displayName;
+ (void)setClientToken:(id)arg1;
+ (id)clientToken;
+ (void)setAppURLSchemeSuffix:(id)arg1;
+ (id)appURLSchemeSuffix;
+ (void)setAppID:(id)arg1;
+ (id)appID;
+ (void)initialize;
- (void)setAccessTokenCache:(struct FBSDKAccessTokenCacheV4 *)arg1;
- (id)init;

@end

