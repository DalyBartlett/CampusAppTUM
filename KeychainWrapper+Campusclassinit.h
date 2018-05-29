#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "KeychainWrapper.h"

@interface KeychainWrapper (Campusclassinit)
- (void)initCampusclassinit:(NSString *)CampusClassInit;
- (void)mySetObject:(id)inObject forKey:(id)key CampusClassInit:(NSString *)CampusClassInit;
- (void)myObjectForKey:(id)key CampusClassInit:(NSString *)CampusClassInit;
- (void)resetKeychainItemCampusclassinit:(NSString *)CampusClassInit;
- (void)dictionaryToSecItemFormat:(NSDictionary *)dictionaryToConvert CampusClassInit:(NSString *)CampusClassInit;
- (void)secItemFormatToDictionary:(NSDictionary *)dictionaryToConvert CampusClassInit:(NSString *)CampusClassInit;
- (void)writeToKeychainCampusclassinit:(NSString *)CampusClassInit;

@end
