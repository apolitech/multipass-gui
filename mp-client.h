#pragma once

#include <gio/gio.h>

G_BEGIN_DECLS

#define MP_TYPE_CLIENT (mp_client_get_type ())
G_DECLARE_FINAL_TYPE (MpClient, mp_client, MP, CLIENT, GObject)

MpClient *mp_client_new         (void);

void      mp_client_list_async  (MpClient            *client,
                                 GCancellable        *cancellable,
                                 GAsyncReadyCallback  callback,
                                 gpointer             callback_data);

gchar   **mp_client_list_finish (MpClient            *client,
                                 GAsyncResult        *result,
                                 GError             **error);

void      mp_client_find_async  (MpClient            *client,
                                 GCancellable        *cancellable,
                                 GAsyncReadyCallback  callback,
                                 gpointer             callback_data);

gchar   **mp_client_find_finish (MpClient            *client,
                                 GAsyncResult        *result,
                                 GError             **error);

G_END_DECLS
